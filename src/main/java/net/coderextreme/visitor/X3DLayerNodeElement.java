package net.coderextreme.visitor;
public class X3DLayerNodeElement implements org.web3d.x3d.sai.Layering.X3DLayerNode ,  VisitableElement
{
	private org.web3d.x3d.sai.Layering.X3DLayerNode delegate = null;
	public X3DLayerNodeElement(org.web3d.x3d.sai.Layering.X3DLayerNode delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getISElement().accept(v);
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
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
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
