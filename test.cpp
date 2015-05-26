
int x=0;
int y=0;

void DrawPoint(int x,int y,color c);


//红色部分

for(y=0,y<n/2;y++){
	for(x=y;x<n-y;x++){
		DrawPoint(x,y,color_red);
	}
}

//蓝色部分

for(y=n/2,y<n;y++){
	for(x=n-y;x<y;x++){
		DrawPoint(x,y,color_blue);
	}
}

//白色部分

for(x=0,x<n/2;x++){
	for(y=x;y<n-x;y++){
		DrawPoint(x,y,color_red);
	}
}

//黑色部分
for(x=n/2,x<n;x++){
	for(y=n-x;y<x;y++){
		DrawPoint(x,y,color_blue);
	}
}