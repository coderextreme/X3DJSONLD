package net.coderextreme.visitor;
public class MFVec2dElement extends org.web3d.x3d.jsail.fields.MFVec2d implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.MFVec2d delegate = null;
	public MFVec2dElement(org.web3d.x3d.jsail.fields.MFVec2d delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
