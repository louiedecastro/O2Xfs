package at.o2xfs.xfs.cim;

import at.o2xfs.xfs.XfsConstant;

public enum CashInType implements XfsConstant {

	/*
	 * @since v3.00
	 */
	RECYCLING(1L),

	/*
	 * @since v3.00
	 */
	CASHIN(2L),

	/*
	 * @since v3.00
	 */
	REPCONTAINER(3L),

	/*
	 * @since v3.00
	 */
	RETRACTCASSETTE(4L),

	/*
	 * @since v3.10
	 */
	REJECT(5L),

	/*
	 * @since v3.10
	 */
	CDMSPECIFIC(6L);

	private final long value;

	private CashInType(final long value) {
		this.value = value;
	}

	@Override
	public long getValue() {
		return value;
	}
}