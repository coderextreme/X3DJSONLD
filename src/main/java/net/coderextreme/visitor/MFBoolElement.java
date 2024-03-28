package net.coderextreme.visitor;
public class MFBoolElement extends org.web3d.x3d.jsail.fields.MFBool implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.MFBool delegate = null;
	public MFBoolElement(org.web3d.x3d.jsail.fields.MFBool delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
