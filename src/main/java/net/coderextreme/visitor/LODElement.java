package net.coderextreme.visitor;
public class LODElement extends org.web3d.x3d.jsail.Navigation.LOD implements VisitableElement
{
	private org.web3d.x3d.jsail.Navigation.LOD delegate = null;
	public LODElement(org.web3d.x3d.jsail.Navigation.LOD delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getBboxCenterElement().accept(v);
		getBboxDisplayElement().accept(v);
		getBboxSizeElement().accept(v);
		getCenterElement().accept(v);
		getChildrenElement().accept(v);
		getForceTransitionsElement().accept(v);
		getISElement().accept(v);
		getLevelElement().accept(v);
		getMetadataElement().accept(v);
		getRangeElement().accept(v);
		getVisibleElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFVec3fElement getBboxCenterElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBboxCenter()));
}
	public SFBoolElement getBboxDisplayElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getBboxDisplay()));
}
	public SFVec3fElement getBboxSizeElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBboxSize()));
}
	public SFVec3fElement getCenterElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getCenter()));
}
	public MFNodeElement getChildrenElement() { 		 return new MFNodeElement(delegate.getChildren());
}
	public SFBoolElement getForceTransitionsElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getForceTransitions()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFInt32Element getLevelElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getLevel()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public MFFloatElement getRangeElement() { 		 return new MFFloatElement(new org.web3d.x3d.jsail.fields.MFFloat(delegate.getRange()));
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
