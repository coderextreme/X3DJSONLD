package net.coderextreme.visitor;
public class SFVec3dElement extends org.web3d.x3d.jsail.fields.SFVec3d implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.SFVec3d delegate = null;
	public SFVec3dElement(org.web3d.x3d.jsail.fields.SFVec3d delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
