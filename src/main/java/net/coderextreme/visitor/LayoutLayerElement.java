package net.coderextreme.visitor;
public class LayoutLayerElement extends org.web3d.x3d.jsail.Layout.LayoutLayer implements VisitableElement
{
	private org.web3d.x3d.jsail.Layout.LayoutLayer delegate = null;
	public LayoutLayerElement(org.web3d.x3d.jsail.Layout.LayoutLayer delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getBboxCenterElement().accept(v);
		getBboxSizeElement().accept(v);
		getBboxDisplayElement().accept(v);
		getChildrenElement().accept(v);
		getISElement().accept(v);
		getLayoutElement().accept(v);
		getMetadataElement().accept(v);
		getObjectTypeElement().accept(v);
		getPickableElement().accept(v);
		getViewportElement().accept(v);
		getVisibleElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFVec3fElement getBboxCenterElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBboxCenter()));
}
	public SFVec3fElement getBboxSizeElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBboxSize()));
}
	public SFBoolElement getBboxDisplayElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getBboxDisplay()));
}
	public MFNodeElement getChildrenElement() { 		 return new MFNodeElement(delegate.getChildren());
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getLayoutElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getLayout()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public MFStringElement getObjectTypeElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getObjectType()));
}
	public SFBoolElement getPickableElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getPickable()));
}
	public SFNodeElement getViewportElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getViewport()));
}
	public SFBoolElement getVisibleElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getVisible()));
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
