import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.math.BigDecimal;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.Deque;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
import java.util.StringTokenizer;

import com.sun.jmx.remote.internal.ArrayQueue;

public class Main{
	public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringBuilder sb = new StringBuilder();
        // StringTokenizer token = new StringTokenizer(br.readLine());
        // int N = Integer.parseInt(token.nextToken());
        int N = Integer.parseInt(br.readLine());
        int max = 1000000;
        int[] n = new int[N + 10];

        n[0] = 0;
        n[1] = 0;
        n[2] = 1;
        n[3] = 1;

        for (int i = 4; i <= N; i++) {
            n[i] = n[i-1] + 1;
            if (i % 2 == 0) {
                n[i] = Math.min(n[i/2] + 1, n[i]);
            }
            if (i % 3 == 0) {
                n[i] = Math.min(n[i/3] + 1, n[i]);
            }
        }
        
        bw.write("" + n[N]);
        bw.flush();
    }
}
