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
    #  The following component tag is needed since LineProperties node is not part of the default Immersive profile 
    component(level=2,name='Shape'),
    meta(content='LinePropertiesExample.x3d',name='title'),
    meta(content='Demonstrate each of the various LineProperties enumeration values.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='20 August 2008',name='created'),
    meta(content='26 July 2021',name='modified'),
    meta(content='LinePropertiesLinetypeExample.png',name='Image'),
    meta(content='https://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/LinePropertiesExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='LineProperties.x3d'),
    Viewpoint(description='LineProperties linetype examples',position=(0,0,22)),
    Transform(translation=(1,-6,0),
      children=[
      Transform(translation=(-4,14,0),
        children=[
        Shape(
          geometry=Text(string=["1 Solid"],
            fontStyle=FontStyle(DEF='LeftJustify',justify=["BEGIN","MIDDLE"])),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0)))),
        Transform(translation=(-4,0,0),
          children=[
          Shape(
            geometry=IndexedLineSet(coordIndex=[0,1],
              coord=Coordinate(DEF='Segment',point=[(0,0,0),(2,0,0)])),
            appearance=Appearance(
              material=Material(emissiveColor=(1,0,0)),
              lineProperties=LineProperties(
                #  linetype='1' solid 
                )))])]),
      Transform(translation=(-4,13,0),
        children=[
        Shape(
          geometry=Text(string=["2 Dashed"],
            fontStyle=FontStyle(USE='LeftJustify')),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.5,0)))),
        Transform(translation=(-4,0,0),
          children=[
          Shape(
            geometry=IndexedLineSet(coordIndex=[0,1,-1],
              coord=Coordinate(USE='Segment')),
            appearance=Appearance(
              material=Material(emissiveColor=(1,0.5,0)),
              lineProperties=LineProperties(linetype=2,
                #  linetype='2' dashed 
                )))])]),
      Transform(translation=(-4,12,0),
        children=[
        Shape(
          geometry=Text(string=["3 Dotted"],
            fontStyle=FontStyle(USE='LeftJustify')),
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,0)))),
        Transform(translation=(-4,0,0),
          children=[
          Shape(
            geometry=IndexedLineSet(coordIndex=[0,1,-1],
              coord=Coordinate(USE='Segment')),
            appearance=Appearance(
              material=Material(emissiveColor=(1,1,0)),
              lineProperties=LineProperties(linetype=3,
                #  linetype='3' dotted 
                )))])]),
      Transform(translation=(-4,11,0),
        children=[
        Shape(
          geometry=Text(string=["4 Dashed-dotted"],
            fontStyle=FontStyle(USE='LeftJustify')),
          appearance=Appearance(
            material=Material(diffuseColor=(0,1,0)))),
        Transform(translation=(-4,0,0),
          children=[
          Shape(
            geometry=IndexedLineSet(coordIndex=[0,1,-1],
              coord=Coordinate(USE='Segment')),
            appearance=Appearance(
              material=Material(emissiveColor=(0,1,0)),
              lineProperties=LineProperties(linetype=4,
                #  linetype='4' dashed-dotted 
                )))])]),
      Transform(translation=(-4,10,0),
        children=[
        Shape(
          geometry=Text(string=["5 Dash-dot-dot"],
            fontStyle=FontStyle(USE='LeftJustify')),
          appearance=Appearance(
            material=Material(diffuseColor=(0.2,0.2,1)))),
        Transform(translation=(-4,0,0),
          children=[
          Shape(
            geometry=IndexedLineSet(coordIndex=[0,1,-1],
              coord=Coordinate(USE='Segment')),
            appearance=Appearance(
              material=Material(emissiveColor=(0,0,1)),
              lineProperties=LineProperties(linetype=5,
                #  linetype='5' dash-dot-dot 
                )))])]),
      Transform(translation=(-4,9,0),
        children=[
        Shape(
          geometry=Text(string=["6 (single arrow)"],
            fontStyle=FontStyle(USE='LeftJustify')),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,1)))),
        Transform(translation=(-4,0,0),
          children=[
          Shape(
            geometry=IndexedLineSet(coordIndex=[0,1,-1],
              coord=Coordinate(USE='Segment')),
            appearance=Appearance(
              material=Material(emissiveColor=(1,0,1)),
              lineProperties=LineProperties(linetype=6,
                #  linetype='6' (optional support) single arrow, meainging single arrowhead at final vertex, in this case pointing to right 
                )))])]),
      Transform(translation=(-4,8,0),
        children=[
        Shape(
          geometry=Text(string=["7 (single dot)"],
            fontStyle=FontStyle(USE='LeftJustify')),
          appearance=Appearance(
            material=Material(diffuseColor=(0,1,1)))),
        Transform(translation=(-4,0,0),
          children=[
          Shape(
            geometry=IndexedLineSet(coordIndex=[0,1,-1],
              coord=Coordinate(USE='Segment')),
            appearance=Appearance(
              material=Material(emissiveColor=(0,1,1)),
              lineProperties=LineProperties(linetype=7,
                #  linetype='7' (optional support) single dot 
                )))])]),
      Transform(translation=(-4,7,0),
        children=[
        Shape(
          geometry=Text(string=["8 (double arrow)"],
            fontStyle=FontStyle(USE='LeftJustify')),
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,1)))),
        Transform(translation=(-4,0,0),
          children=[
          Shape(
            geometry=IndexedLineSet(coordIndex=[0,1,-1],
              coord=Coordinate(USE='Segment')),
            appearance=Appearance(
              material=Material(),
              lineProperties=LineProperties(linetype=8,
                #  linetype='8' (optional support) double arrow, meaning arrow heads at each end 
                )))])]),
      Transform(translation=(-4,6,0),
        children=[
        Shape(
          geometry=Text(string=["9 [no entry]"],
            fontStyle=FontStyle(USE='LeftJustify')),
          appearance=Appearance(
            material=Material(diffuseColor=(0.2,0.2,0.2))))]),
      Transform(translation=(-4,5,0),
        children=[
        Shape(
          geometry=Text(string=["10 (chain line)"],
            fontStyle=FontStyle(USE='LeftJustify')),
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0.5,0.5)))),
        Transform(translation=(-4,0,0),
          children=[
          Shape(
            geometry=IndexedLineSet(coordIndex=[0,1,-1],
              coord=Coordinate(USE='Segment')),
            appearance=Appearance(
              material=Material(emissiveColor=(1,0,0)),
              lineProperties=LineProperties(linetype=10,
                #  linetype='10' (optional support) chain line 
                )))])]),
      Transform(translation=(-4,4,0),
        children=[
        Shape(
          geometry=Text(string=["11 (center line)"],
            fontStyle=FontStyle(USE='LeftJustify')),
          appearance=Appearance(
            material=Material(diffuseColor=(0.8,0.2,0.2)))),
        Transform(translation=(-4,0,0),
          children=[
          Shape(
            geometry=IndexedLineSet(coordIndex=[0,1,-1],
              coord=Coordinate(USE='Segment')),
            appearance=Appearance(
              material=Material(emissiveColor=(0.8,0.2,0.2)),
              lineProperties=LineProperties(linetype=11,
                #  linetype='11' (optional support) center line 
                )))])]),
      Transform(translation=(-4,3,0),
        children=[
        Shape(
          geometry=Text(string=["12 (hidden line)"],
            fontStyle=FontStyle(USE='LeftJustify')),
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0.5,0.1)))),
        Transform(translation=(-4,0,0),
          children=[
          Shape(
            geometry=IndexedLineSet(coordIndex=[0,1,-1],
              coord=Coordinate(USE='Segment')),
            appearance=Appearance(
              material=Material(emissiveColor=(0.5,0.5,0.1)),
              lineProperties=LineProperties(linetype=12,
                #  linetype='12' (optional support) hidden line 
                )))])]),
      Transform(translation=(-4,2,0),
        children=[
        Shape(
          geometry=Text(string=["13 (phantom line)"],
            fontStyle=FontStyle(USE='LeftJustify')),
          appearance=Appearance(
            material=Material(diffuseColor=(0.8,0.8,0.2)))),
        Transform(translation=(-4,0,0),
          children=[
          Shape(
            geometry=IndexedLineSet(coordIndex=[0,1,-1],
              coord=Coordinate(USE='Segment')),
            appearance=Appearance(
              material=Material(emissiveColor=(0.8,0.8,0.2)),
              lineProperties=LineProperties(linetype=13,
                #  linetype='13' (optional support) phantom line 
                )))])]),
      Transform(translation=(-4,1,0),
        children=[
        Shape(
          geometry=Text(string=["14 (break line 1)"],
            fontStyle=FontStyle(USE='LeftJustify')),
          appearance=Appearance(
            material=Material(diffuseColor=(0.2,0.8,0.2)))),
        Transform(translation=(-4,0,0),
          children=[
          Shape(
            geometry=IndexedLineSet(coordIndex=[0,1,-1],
              coord=Coordinate(USE='Segment')),
            appearance=Appearance(
              material=Material(emissiveColor=(0.2,0.8,0.2)),
              lineProperties=LineProperties(linetype=14,
                #  linetype='14' (optional support) break line 1 
                )))])]),
      Transform(translation=(-4,0,0),
        children=[
        Shape(
          geometry=Text(string=["15 (break line 2)"],
            fontStyle=FontStyle(USE='LeftJustify')),
          appearance=Appearance(
            material=Material(diffuseColor=(0.2,0.2,0.8)))),
        Transform(translation=(-4,0,0),
          children=[
          Shape(
            geometry=IndexedLineSet(coordIndex=[0,1,-1],
              coord=Coordinate(USE='Segment')),
            appearance=Appearance(
              material=Material(emissiveColor=(0.2,0.2,0.8)),
              lineProperties=LineProperties(linetype=15,
                #  linetype='15' (optional support) break line 2 
                )))])]),
      Transform(translation=(-4,-1,0),
        children=[
        Shape(
          geometry=Text(string=["16 (user-specified dash pattern)"],
            fontStyle=FontStyle(USE='LeftJustify')),
          appearance=Appearance(
            material=Material(diffuseColor=(0.7,0.7,0.7)))),
        Transform(translation=(-4,0,0),
          children=[
          Shape(
            geometry=IndexedLineSet(coordIndex=[0,1,-1],
              coord=Coordinate(USE='Segment')),
            appearance=Appearance(
              material=Material(emissiveColor=(0.7,0.7,0.7)),
              lineProperties=LineProperties(linetype=16,
                #  linetype='16' (optional support) user-specified dash pattern 
                )))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for LinePropertiesExample.py")
