package net.coderextreme.visitor;
public class MFVec4fElement extends org.web3d.x3d.jsail.fields.MFVec4f implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.MFVec4f delegate = null;
	public MFVec4fElement(org.web3d.x3d.jsail.fields.MFVec4f delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
