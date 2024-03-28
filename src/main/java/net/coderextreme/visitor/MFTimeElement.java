package net.coderextreme.visitor;
public class MFTimeElement extends org.web3d.x3d.jsail.fields.MFTime implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.MFTime delegate = null;
	public MFTimeElement(org.web3d.x3d.jsail.fields.MFTime delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
