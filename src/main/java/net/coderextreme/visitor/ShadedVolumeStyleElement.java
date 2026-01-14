package net.coderextreme.visitor;
public class ShadedVolumeStyleElement extends org.web3d.x3d.jsail.VolumeRendering.ShadedVolumeStyle implements VisitableElement
{
	private org.web3d.x3d.jsail.VolumeRendering.ShadedVolumeStyle delegate = null;
	public ShadedVolumeStyleElement(org.web3d.x3d.jsail.VolumeRendering.ShadedVolumeStyle delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getEnabledElement().accept(v);
		getISElement().accept(v);
		getLightingElement().accept(v);
		getMaterialElement().accept(v);
		getMetadataElement().accept(v);
		getPhaseFunctionElement().accept(v);
		getShadowsElement().accept(v);
		getSurfaceNormalsElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getLightingElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getLighting()));
}
	public SFNodeElement getMaterialElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getMaterial()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFStringElement getPhaseFunctionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getPhaseFunction()));
}
	public SFBoolElement getShadowsElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getShadows()));
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
