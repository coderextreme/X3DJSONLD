package net.coderextreme.visitor;
public class MFColorRGBAElement extends org.web3d.x3d.jsail.fields.MFColorRGBA implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.MFColorRGBA delegate = null;
	public MFColorRGBAElement(org.web3d.x3d.jsail.fields.MFColorRGBA delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
