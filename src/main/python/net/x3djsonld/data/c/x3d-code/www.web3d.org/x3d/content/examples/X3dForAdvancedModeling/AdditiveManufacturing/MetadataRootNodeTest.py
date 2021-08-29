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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='MetadataRootNodeTest.x3d',name='title'),
    meta(content='X3D model metadata might be saved and reused via a separate file, is a Metadata node legal as the root node in a scene?',name='description'),
    meta(content='Don Brutzman and X3D Working Group',name='creator'),
    meta(content='8 December 2016',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://web3d.org/pipermail/x3d-public_web3d.org/2016-December/005680.html',name='reference'),
    meta(content='X3D Specification Mantis Issue (member access required) https://www.web3d.org/member-only/mantis/view.php?id=1092',name='TODO'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/AdditiveManufacturing/MetadataRootNodeTest.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  ============================= 
    #  Option 1: root node of scene 
    children=[
    MetadataSet(DEF='MetadataHolderOption1',name='MetadataCollection1',
      #  can enter other Metadata nodes here 
      ),
    Background(skyColor=[(0.498039,1,0.831373)]),
    #  ============================= 
    #  Option 2: contained within WorldInfo, inaccurate translation to VRML97 
    WorldInfo(DEF='MetadataHolderOption2',title='Test scene for containing X3D Metadata* nodes, with no other content',
      metadata=MetadataSet(name='MetadataCollection2',
        #  can enter other Metadata nodes here 
        )),
    #  ============================= 
    #  Option 3: contained within top-level Group, scope for all contained nodes is unambiguous 
    Group(DEF='MetadataHolderOption3',
      metadata=MetadataSet(name='MetadataCollection3',
        #  can enter other Metadata nodes here 
        )),
    #  ============================= 
    #  Viewing a Mantis issue first requires Web3D Consortium member login 
    Anchor(description='Web3D Consortium members can select text to view Mantis issue 1092',parameter=["target=blank"],url=["https://www.web3d.org/member-only/mantis/view.php?id=1092"],
      #  Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip 
      children=[
      Group(
        children=[
        Shape(
          geometry=Text(string=["Metadata nodes","tested as children","of scene root","(mantis issue 1092)"],
            fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],style_='BOLD')),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0.501961,0.109804)))),
        Shape(
          #  Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible. 
          geometry=Box(size=(8,4,.001)),
          appearance=Appearance(
            material=Material(transparency=1)))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MetadataRootNodeTest.py")
