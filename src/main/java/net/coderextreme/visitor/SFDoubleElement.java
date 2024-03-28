package net.coderextreme.visitor;
public class SFDoubleElement extends org.web3d.x3d.jsail.fields.SFDouble implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.SFDouble delegate = null;
	public SFDoubleElement(org.web3d.x3d.jsail.fields.SFDouble delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
