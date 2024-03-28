package net.coderextreme.visitor;
public class MFFloatElement extends org.web3d.x3d.jsail.fields.MFFloat implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.MFFloat delegate = null;
	public MFFloatElement(org.web3d.x3d.jsail.fields.MFFloat delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
