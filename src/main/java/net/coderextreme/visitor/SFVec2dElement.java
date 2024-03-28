package net.coderextreme.visitor;
public class SFVec2dElement extends org.web3d.x3d.jsail.fields.SFVec2d implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.SFVec2d delegate = null;
	public SFVec2dElement(org.web3d.x3d.jsail.fields.SFVec2d delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
