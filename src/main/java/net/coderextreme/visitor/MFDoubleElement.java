package net.coderextreme.visitor;
public class MFDoubleElement extends org.web3d.x3d.jsail.fields.MFDouble implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.MFDouble delegate = null;
	public MFDoubleElement(org.web3d.x3d.jsail.fields.MFDouble delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
