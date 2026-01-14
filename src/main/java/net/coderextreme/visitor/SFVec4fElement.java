package net.coderextreme.visitor;
public class SFVec4fElement extends org.web3d.x3d.jsail.fields.SFVec4f implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.SFVec4f delegate = null;
	public SFVec4fElement(org.web3d.x3d.jsail.fields.SFVec4f delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
