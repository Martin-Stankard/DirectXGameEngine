float4 vsmain( float4 position : POSITION ) : SV_POSITION
{
	if (position.y > 0 && position.y < 1) {
		position.x += .25f;
	}
	return position;
}