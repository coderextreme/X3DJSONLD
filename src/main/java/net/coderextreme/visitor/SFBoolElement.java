package net.coderextreme.visitor;
public class SFBoolElement extends org.web3d.x3d.jsail.fields.SFBool implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.SFBool delegate = null;
	public SFBoolElement(org.web3d.x3d.jsail.fields.SFBool delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
