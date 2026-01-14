package net.coderextreme.visitor;
public class ComposedVolumeStyleElement extends org.web3d.x3d.jsail.VolumeRendering.ComposedVolumeStyle implements VisitableElement
{
	private org.web3d.x3d.jsail.VolumeRendering.ComposedVolumeStyle delegate = null;
	public ComposedVolumeStyleElement(org.web3d.x3d.jsail.VolumeRendering.ComposedVolumeStyle delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getEnabledElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getRenderStyleElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public MFNodeElement getRenderStyleElement() { 		 return new MFNodeElement<renderStyle>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getRenderStyle()));
}
	public SFStringElement getDEFElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDEF()));
}
	public SFStringElement getUSEElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getUSE()));
}
	public SFStringElement getCssClassElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssClass()));
}
	public SFStringElement getCssStyleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssStyle()));
}
}
