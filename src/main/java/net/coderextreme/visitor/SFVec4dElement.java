package net.coderextreme.visitor;
public class SFVec4dElement extends org.web3d.x3d.jsail.fields.SFVec4d implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.SFVec4d delegate = null;
	public SFVec4dElement(org.web3d.x3d.jsail.fields.SFVec4d delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
