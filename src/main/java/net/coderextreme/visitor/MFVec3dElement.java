package net.coderextreme.visitor;
public class MFVec3dElement extends org.web3d.x3d.jsail.fields.MFVec3d implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.MFVec3d delegate = null;
	public MFVec3dElement(org.web3d.x3d.jsail.fields.MFVec3d delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
