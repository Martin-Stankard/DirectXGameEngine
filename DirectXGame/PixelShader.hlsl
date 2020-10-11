struct PS_INPUT
{
	float4 position: SV_POSITION;
	float3 color: COLOR;
	float3 color1: COLOR1;
};

cbuffer constant: register(b0)
{
	unsigned int m_time;
};

float4 psmain(PS_INPUT input) : SV_TARGET
{
	unsigned int prediod_ms = 3000;
	return float4(lerp(input.color, input.color1, (sin(2.0f * 3.1416f / prediod_ms * (m_time % prediod_ms)) + 1.0f) / 2.0f),1.0f);
}