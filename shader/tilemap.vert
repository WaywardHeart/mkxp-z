uniform mat4 projMat;
uniform mat4 tilemapMat;

uniform vec2 texSizeInv;
uniform vec2 translation;

uniform float aniIndex;

attribute vec2 position;
attribute vec2 texCoord;

varying vec2 v_texCoord;

const float tileSize = 16.0;
const float atAreaW = tileSize*3.0;
const float atAreaH = tileSize*4.0*7.0;
const float atAniOffset = tileSize*3.0;

void main()
{
    vec2 tex = texCoord;

    //lowp float pred = float(tex.x <= atAreaW && tex.y <= atAreaH);
    lowp int pred = int(tex.x <= atAreaW && tex.y <= atAreaH);

    //tex.x += aniIndex * atAniOffset * pred;
    tex.x += aniIndex * atAniOffset * float(pred);

    gl_Position = projMat * tilemapMat * vec4(position + translation, 0, 1);

    v_texCoord = tex * texSizeInv;
}
