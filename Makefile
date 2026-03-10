CFLAGS = -std=c11 -O2
# 手動加入 wayland-client 連結
LDFLAGS = -lglfw -lvulkan -lwayland-client -ldl -lpthread

BasicWindow: main.c
	gcc $(CFLAGS) -o BasicWindow main.c $(LDFLAGS)

clean:
	rm -f BasicWindow
