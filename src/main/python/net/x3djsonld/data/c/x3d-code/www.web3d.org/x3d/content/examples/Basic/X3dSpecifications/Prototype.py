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
    meta(content='Prototype.x3d',name='title'),
    meta(content='X3D encodings example: defining a Prototype, demonstration of IS/connect definitions.',name='description'),
    meta(content='Don Brutzman and Joe Williams',name='creator'),
    meta(content='1 June 2002',name='created'),
    meta(content='28 October 2019',name='modified'),
    meta(content='X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, Annex C.4 Prototype example',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/examples.html#PrototypeExample',name='specificationUrl'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/Prototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Prototype.x3d'),
    ProtoDeclare(name='TwoColorTable',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='legColor',type='SFColor',value=(.8,.4,.7)),
        field(accessType='initializeOnly',name='topColor',type='SFColor',value=(.6,.6,.1))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          Transform(translation=(0.0,0.6,0.0),
            #  table top 
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='TableTopMaterial',
                  IS=IS(
                    connect=[
                    connect(nodeField='diffuseColor',protoField='topColor')]))),
              geometry=Box(size=(1.2,0.2,1.2)))]),
          Transform(translation=(-0.5,0.0,-0.5),
            #  first table leg 
            children=[
            Shape(DEF='Leg',
              appearance=Appearance(
                material=Material(DEF='LegMaterial',diffuseColor=(1.0,0.0,0.0),
                  IS=IS(
                    connect=[
                    connect(nodeField='diffuseColor',protoField='legColor')]))),
              geometry=Cylinder(height=1.0,radius=0.1))]),
          Transform(translation=(0.5,0.0,-0.5),
            #  another table leg 
            children=[
            Shape(USE='Leg')]),
          Transform(translation=(-0.5,0.0,0.5),
            children=[
            Shape(USE='Leg')]
            #  another table leg 
            ),
          Transform(translation=(0.5,0.0,0.5),
            children=[
            Shape(USE='Leg')]
            #  another table leg 
            )]
          #  End of root Transform's children 
          )]
        #  End of root Transform 
        )),
    #  End of prototype 
    #  The prototype is now defined. Although it contains a number of nodes, only the legColor and topColor fields are public. Instead of using the default legColor and topColor, this instance of the table has red legs and a green top: 
    ProtoInstance(name='TwoColorTable',
      fieldValue=[
      fieldValue(name='legColor',value=(1,0,0)),
      fieldValue(name='topColor',value=(0,1,0))]),
    NavigationInfo(type=["EXAMINE"])]
    #  Use the Examine viewer 
    )
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Prototype.py")
