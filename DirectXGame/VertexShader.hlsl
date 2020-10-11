struct VS_INPUT
{
	float4 position: POSITION;
	float4 position1: POSITION1;
	float3 color: COLOR;
	float3 color1: COLOR1;
};

struct VS_OUTPUT
{
	float4 position: SV_POSITION;
	float3 color: COLOR;
	float3 color1: COLOR1;
};


cbuffer constant: register(b0)
{
	unsigned int m_time;
};



VS_OUTPUT vsmain(VS_INPUT input)
{
	VS_OUTPUT output = (VS_OUTPUT)0;

	unsigned int prediod_ms = 3000;

	output.position = lerp(input.position, input.position1, (sin(2.0f * 3.1416f / prediod_ms * (m_time % prediod_ms)) + 1.0f) / 2.0f);
	output.color = input.color;
	output.color1 = input.color1;
	return output;
}