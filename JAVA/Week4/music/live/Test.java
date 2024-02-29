package JAVA.Week4.music.live;

import JAVA.Week4.music.Playable;

/**
 * Test
 */
public class Test {

    Venna v1 = new Veena();
    v1.play();

    Saxophone s1 = new Saxophone();
    s1.play();

    Playable p1 = v1;
    p1.play();

    p1 = s1;
    p1.play();
}