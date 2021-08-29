###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Interactive',version='3.1',
  head=head(
    children=[
    component(level=2,name='CADGeometry'),
    meta(content='CatiaHubAssemblyInline.x3d',name='title'),
    meta(content='CatiaHubAssembly model demonstrating external referencing of geometry files using Prototype with Inline.',name='description'),
    meta(content='Hyokwang Lee, PartDB Co., Ltd.',name='creator'),
    meta(content='Xj3D, http://www.xj3d.org',name='translator'),
    meta(content='25 July 2012',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-X3DAbstractSpecification/Part01/components/CADGeometry.html',name='reference'),
    meta(content='X3D CAD CADInterchange profile',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubAssemblyInline.x3d',name='identifier'),
    meta(content='CATIA V5 R18 and PartDB Converter with Xj3D',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='CatiaHubAssemblyInline.x3d'),
    Viewpoint(description='Hello CatiaHubAssemblyInline',position=(0,0,1)),
    Transform(DEF='RootTransform',
      children=[
      CADAssembly(name='Hub_Assembly',
        children=[
        Transform(DEF='TransformCatiaHubDiscWithHoles',
          children=[
          CADAssembly(name='disc_with_holes',
            children=[
            Inline(DEF='CatiaHubDiscWithHoles',url=["CatiaHubDiscWithHoles.x3d","https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubDiscWithHoles.x3d","CatiaHubDiscWithHoles.wrl","https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubDiscWithHoles.wrl"])])]),
        Transform(DEF='TransformCatiaHubCap',translation=(0,0,0.030),
          children=[
          CADAssembly(name='cap',
            children=[
            Inline(DEF='CatiaHubCap',url=["CatiaHubCap.x3d","https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubCap.x3d","CatiaHubCap.wrl","https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubCap.wrl"])])]),
        Transform(DEF='TransformCatiaHubGasket',
          children=[
          CADAssembly(name='sleeve_sub_assembly',
            children=[
            Transform(DEF='Transform',translation=(0,0,0.050),
              children=[
              Inline(DEF='CatiaHubGasket',url=["CatiaHubGasket.x3d","https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubGasket.x3d","CatiaHubGasket.wrl","https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubGasket.wrl"])])])]),
        Transform(DEF='TransformCatiaHubBushing',translation=(0,0,0.085),
          children=[
          CADAssembly(name='cylinder',
            children=[
            Inline(DEF='CatiaHubBushing',url=["CatiaHubBushing.x3d","https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubBushing.x3d","CatiaHubBushing.wrl","https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubBushing.wrl"])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CatiaHubAssemblyInline.py")
