package net.coderextreme.visitor;
public class SFFloatElement extends org.web3d.x3d.jsail.fields.SFFloat implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.SFFloat delegate = null;
	public SFFloatElement(org.web3d.x3d.jsail.fields.SFFloat delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
