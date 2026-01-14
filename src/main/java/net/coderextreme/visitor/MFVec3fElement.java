package net.coderextreme.visitor;
public class MFVec3fElement extends org.web3d.x3d.jsail.fields.MFVec3f implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.MFVec3f delegate = null;
	public MFVec3fElement(org.web3d.x3d.jsail.fields.MFVec3f delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
