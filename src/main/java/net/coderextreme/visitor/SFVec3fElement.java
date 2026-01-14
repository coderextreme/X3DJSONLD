package net.coderextreme.visitor;
public class SFVec3fElement extends org.web3d.x3d.jsail.fields.SFVec3f implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.SFVec3f delegate = null;
	public SFVec3fElement(org.web3d.x3d.jsail.fields.SFVec3f delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
