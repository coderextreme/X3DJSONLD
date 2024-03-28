package net.coderextreme.visitor;
public class SFRotationElement extends org.web3d.x3d.jsail.fields.SFRotation implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.SFRotation delegate = null;
	public SFRotationElement(org.web3d.x3d.jsail.fields.SFRotation delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
