package net.coderextreme.visitor;
public class MFStringElement extends org.web3d.x3d.jsail.fields.MFString implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.MFString delegate = null;
	public MFStringElement(org.web3d.x3d.jsail.fields.MFString delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
