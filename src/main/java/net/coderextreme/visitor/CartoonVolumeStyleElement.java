package net.coderextreme.visitor;
public class CartoonVolumeStyleElement extends org.web3d.x3d.jsail.VolumeRendering.CartoonVolumeStyle implements VisitableElement
{
	private org.web3d.x3d.jsail.VolumeRendering.CartoonVolumeStyle delegate = null;
	public CartoonVolumeStyleElement(org.web3d.x3d.jsail.VolumeRendering.CartoonVolumeStyle delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getColorStepsElement().accept(v);
		getEnabledElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getOrthogonalColorElement().accept(v);
		getParallelColorElement().accept(v);
		getSurfaceNormalsElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFInt32Element getColorStepsElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getColorSteps()));
}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFColorRGBAElement getOrthogonalColorElement() { 		 return new SFColorRGBAElement(new org.web3d.x3d.jsail.fields.SFColorRGBA(delegate.getOrthogonalColor()));
}
	public SFColorRGBAElement getParallelColorElement() { 		 return new SFColorRGBAElement(new org.web3d.x3d.jsail.fields.SFColorRGBA(delegate.getParallelColor()));
}
	public SFNodeElement getSurfaceNormalsElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getSurfaceNormals()));
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
