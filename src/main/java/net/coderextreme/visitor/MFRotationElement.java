package net.coderextreme.visitor;
public class MFRotationElement extends org.web3d.x3d.jsail.fields.MFRotation implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.MFRotation delegate = null;
	public MFRotationElement(org.web3d.x3d.jsail.fields.MFRotation delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
