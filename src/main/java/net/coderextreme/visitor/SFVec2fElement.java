package net.coderextreme.visitor;
public class SFVec2fElement extends org.web3d.x3d.jsail.fields.SFVec2f implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.SFVec2f delegate = null;
	public SFVec2fElement(org.web3d.x3d.jsail.fields.SFVec2f delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
