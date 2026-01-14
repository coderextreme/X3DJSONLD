package net.coderextreme.visitor;
public class MFVec2fElement extends org.web3d.x3d.jsail.fields.MFVec2f implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.MFVec2f delegate = null;
	public MFVec2fElement(org.web3d.x3d.jsail.fields.MFVec2f delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
