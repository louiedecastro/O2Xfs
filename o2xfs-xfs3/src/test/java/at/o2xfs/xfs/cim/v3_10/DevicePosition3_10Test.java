package at.o2xfs.xfs.cim.v3_10;

import static org.junit.Assert.assertEquals;

import org.junit.Test;

import at.o2xfs.win32.Buffer;
import at.o2xfs.xfs.v3_10.BaseXfs3_10Test;

public class DevicePosition3_10Test extends BaseXfs3_10Test {

	@Test
	public final void test() {
		DevicePosition3_10 expected = new DevicePosition3_10(buildDevicePosition3_10().getPointer());
		DevicePosition3_10 actual = new DevicePosition3_10(expected);
		System.out.println(actual);
		assertEquals(expected, actual);
	}

	private native Buffer buildDevicePosition3_10();
}
