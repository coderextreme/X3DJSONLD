package net.coderextreme.visitor;
public class LayerSetElement extends org.web3d.x3d.jsail.Layering.LayerSet implements VisitableElement
{
	private org.web3d.x3d.jsail.Layering.LayerSet delegate = null;
	public LayerSetElement(org.web3d.x3d.jsail.Layering.LayerSet delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getActiveLayerElement().accept(v);
		getISElement().accept(v);
		getLayersElement().accept(v);
		getMetadataElement().accept(v);
		getOrderElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFInt32Element getActiveLayerElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getActiveLayer()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public MFNodeElement getLayersElement() { 		 return new MFNodeElement<layers>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getLayers()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public MFInt32Element getOrderElement() { 		 return new MFInt32Element(new org.web3d.x3d.jsail.fields.MFInt32(delegate.getOrder()));
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
