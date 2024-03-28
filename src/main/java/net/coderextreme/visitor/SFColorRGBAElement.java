package net.coderextreme.visitor;
public class SFColorRGBAElement extends org.web3d.x3d.jsail.fields.SFColorRGBA implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.SFColorRGBA delegate = null;
	public SFColorRGBAElement(org.web3d.x3d.jsail.fields.SFColorRGBA delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
