package net.coderextreme.visitor;
public class SFStringElement extends org.web3d.x3d.jsail.fields.SFString implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.SFString delegate = null;
	public SFStringElement(org.web3d.x3d.jsail.fields.SFString delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
