package net.coderextreme.visitor;
public class MFVec4dElement extends org.web3d.x3d.jsail.fields.MFVec4d implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.MFVec4d delegate = null;
	public MFVec4dElement(org.web3d.x3d.jsail.fields.MFVec4d delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
