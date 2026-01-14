package net.coderextreme.visitor;
public class MFMatrix3fElement extends org.web3d.x3d.jsail.fields.MFMatrix3f implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.MFMatrix3f delegate = null;
	public MFMatrix3fElement(org.web3d.x3d.jsail.fields.MFMatrix3f delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
