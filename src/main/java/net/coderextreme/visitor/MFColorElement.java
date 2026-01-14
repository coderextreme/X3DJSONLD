package net.coderextreme.visitor;
public class MFColorElement extends org.web3d.x3d.jsail.fields.MFColor implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.MFColor delegate = null;
	public MFColorElement(org.web3d.x3d.jsail.fields.MFColor delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
