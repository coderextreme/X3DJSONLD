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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='AdditiveSubtractiveLight.x3d',name='title'),
    meta(content='This example tests various color combination capabilities, and also demonstrating that filtering (negative colors) are not supported in the X3D/VRML color model. Discussion follows. There are 2 ways to combine colors: Additive (e.g. a TV screen, overlapping spotlights, or pointillist art), for example [red + green = yellow] [1 0 0 + 0 1 0 = 1 1 0]. Subtractive (e.g. mixing paints or stacking filters), for example [white background + yellow filter + cyan filter = green] [1 1 1 + 0 0 -1 + -1 0 0 = 0 1 0].',name='description'),
    meta(content='Miriam English',name='creator'),
    meta(content='Xeena VRML importer, X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html',name='translator'),
    meta(content='Don Brutzman and MV4205 class',name='translator'),
    meta(content='6 May 2003',name='created'),
    meta(content='6 May 2003',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='additive-subtractiveLight2.7May2003.x3d',name='reference'),
    meta(content='http://www.rgbworld.com/color.html',name='reference'),
    meta(content='AdditiveSubtractiveLight.png',name='Image'),
    meta(content='additive subtractive light examples',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/AdditiveSubtractiveLight.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='AdditiveSubtractiveLight.x3d'),
    NavigationInfo(headlight=False,type=["EXAMINE"]),
    Viewpoint(description='entry',jump=False,position=(0.0,-1.0,14.0)),
    Viewpoint(description='side',jump=False,orientation=(0.0,1.0,0.0,-0.7),position=(-5.0,-1.0,3.0)),
    Transform(translation=(-6.2,0.0,-1.0),
      children=[
      Transform(rotation=(1.0,0.0,0.0,1.57),translation=(-3.0,2.8,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=1.0,diffuseColor=(1.0,1.0,1.0))),
          geometry=ElevationGrid(height=[0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],xDimension=20,xSpacing=0.3,zDimension=20,zSpacing=0.3))]),
      Transform(translation=(0.0,-4.1,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=0.0,diffuseColor=(1.0,1.0,1.0),emissiveColor=(0.5,0.5,0.5))),
          geometry=Text(string=["additive","(correct)"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])))]),
      Transform(translation=(0.0,0.6,0.3),
        children=[
        Transform(translation=(-0.6,0.0,0.0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(1.0,0.0,0.0))),
            geometry=Sphere(radius=0.2)),
          PointLight(ambientIntensity=0.5,attenuation=(0.0,1.0,0.0),color=(1.0,0.0,0.0))]),
        Transform(translation=(0.0,-1.2,0.0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.0,1.0,0.0))),
            geometry=Sphere(radius=0.2)),
          PointLight(ambientIntensity=0.5,attenuation=(0.0,1.0,0.0),color=(0.0,1.0,0.0))]),
        Transform(translation=(0.6,0.0,0.0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.0,0.0,1.0))),
            geometry=Sphere(radius=0.2)),
          PointLight(ambientIntensity=0.5,attenuation=(0.0,1.0,0.0),color=(0.0,0.0,1.0))])])]),
    Transform(translation=(3.0,-0.1,-1.0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(ambientIntensity=0.0,diffuseColor=(1.0,1.0,1.0),emissiveColor=(1.0,1.0,1.0))),
        geometry=Box(size=(13.0,6.0,0.01))),
      Transform(translation=(0.0,-4.1,0.1),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=0.0,diffuseColor=(1.0,1.0,1.0),emissiveColor=(0.5,0.5,0.5))),
          geometry=Text(string=["subtractive","(incorrect)"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])))])]),
    Transform(translation=(-1.0,1.0,0.0),
      children=[
      Transform(translation=(0.0,-3.0,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0))),
          geometry=Text(string=["diffuse only"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.6)))]),
      Transform(rotation=(1.0,0.0,0.0,1.57),translation=(-0.5,0.2,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=0.0,diffuseColor=(0.0,1.0,1.0),shininess=0.0,transparency=0.5)),
          geometry=Cylinder(height=0.01))]),
      Transform(rotation=(1.0,0.0,0.0,1.57),translation=(0.5,0.2,-0.01),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=0.0,diffuseColor=(1.0,0.0,1.0),shininess=0.0,transparency=0.5)),
          geometry=Cylinder(height=0.01))]),
      Transform(rotation=(1.0,0.0,0.0,1.57),translation=(0.0,-0.68,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=0.0,diffuseColor=(1.0,1.0,0.0),shininess=0.0,transparency=0.5)),
          geometry=Cylinder(height=0.01))])]),
    Transform(translation=(2.5,1.0,0.0),
      children=[
      Transform(translation=(0.0,-3.0,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0))),
          geometry=Text(string=["emissive only"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.6)))]),
      Transform(rotation=(1.0,0.0,0.0,1.57),translation=(-0.5,0.2,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(0.0,1.0,1.0),shininess=0.0,transparency=0.5)),
          geometry=Cylinder(height=0.01))]),
      Transform(rotation=(1.0,0.0,0.0,1.57),translation=(0.5,0.2,-0.01),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(1.0,0.0,1.0),shininess=0.0,transparency=0.5)),
          geometry=Cylinder(height=0.01))]),
      Transform(rotation=(1.0,0.0,0.0,1.57),translation=(0.0,-0.68,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),emissiveColor=(1.0,1.0,0.0),shininess=0.0,transparency=0.5)),
          geometry=Cylinder(height=0.01))])]),
    Transform(translation=(6.0,1.0,0.0),
      children=[
      Transform(translation=(0.0,-2.5,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0))),
          geometry=Text(string=["how it","should look","(faked)"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.6)))]),
      Transform(rotation=(1.0,0.0,0.0,1.57),scale=(2.0,2.0,2.0),
        children=[
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=0.0,diffuseColor=(0.0,1.0,1.0),emissiveColor=(0.0,1.0,1.0),shininess=0.0)),
            geometry=IndexedFaceSet(coordIndex=[3,4,5,-1,3,5,2,-1,2,5,1,-1,1,5,0,-1,0,5,13,-1,13,5,14,-1,14,5,15,-1,15,5,16,-1,16,5,17,-1,17,5,18,-1,18,5,19,-1,19,5,20,-1,20,5,21,-1,21,5,22,-1,12,23,22,-1,12,5,11,-1,11,5,10,-1,10,5,9,-1,9,5,8,-1,8,5,7,-1,5,6,7,-1,5,12,22,-1],
              coord=Coordinate(point=[(0.0013,0.0,-0.5314),(-0.1193,0.0,-0.5813),(-0.2487,0.0,-0.5983),(-0.3781,0.0,-0.5813),(-0.4987,0.0,-0.5314),(-0.6023,0.0,-0.4519),(-0.6818,0.0,-0.3483),(-0.7317,0.0,-0.2277),(-0.7487,0.0,-0.0983),(-0.7317,0.0,0.0311),(-0.6818,0.0,0.1517),(-0.6023,0.0,0.2552),(-0.4987,0.0,0.3347),(0.0029,0.0,-0.5301),(-0.099,0.0,-0.4519),(-0.1785,0.0,-0.3483),(-0.2284,0.0,-0.2277),(-0.2455,0.0,-0.0983),(-0.2453,0.0,-0.0967),(-0.3478,0.0,-0.018),(-0.4272,0.0,0.0855),(-0.4772,0.0,0.2061),(-0.4942,0.0,0.3355),(-0.4941,0.0,0.3366)])))]),
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=0.0,diffuseColor=(1.0,0.0,1.0),emissiveColor=(1.0,0.0,1.0),shininess=0.0)),
            geometry=IndexedFaceSet(coordIndex=[16,4,17,-1,17,6,18,-1,18,12,19,-1,19,12,20,-1,12,21,20,-1,12,18,13,-1,13,7,14,-1,8,15,14,-1,8,14,7,-1,7,18,6,-1,6,17,5,-1,5,17,4,-1,4,16,3,-1,3,16,2,-1,2,16,1,-1,1,16,0,-1,0,16,11,-1,11,16,10,-1,16,9,10,-1,18,7,13,-1],
              coord=Coordinate(point=[(0.7545,0.0,-0.0983),(0.7375,0.0,-0.2277),(0.6875,0.0,-0.3483),(0.6081,0.0,-0.4519),(0.5045,0.0,-0.5314),(0.3839,0.0,-0.5813),(0.2545,0.0,-0.5983),(0.1251,0.0,-0.5813),(0.0045,0.0,-0.5314),(0.6081,0.0,0.2552),(0.6875,0.0,0.1517),(0.7375,0.0,0.0311),(0.2342,0.0,-0.2277),(0.1843,0.0,-0.3483),(0.1048,0.0,-0.4519),(0.0029,0.0,-0.5301),(0.5056,0.0,0.3339),(0.4887,0.0,0.2061),(0.4388,0.0,0.0855),(0.3593,0.0,-0.018),(0.2558,0.0,-0.0975),(0.2511,0.0,-0.0994)])))]),
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=0.0,diffuseColor=(1.0,1.0,0.0),emissiveColor=(1.0,1.0,0.0),shininess=0.0)),
            geometry=IndexedFaceSet(coordIndex=[12,8,13,-1,13,10,14,-1,14,19,15,-1,15,18,16,-1,18,17,16,-1,18,15,19,-1,19,14,20,-1,20,11,21,-1,21,0,22,-1,0,23,22,-1,0,21,11,-1,11,14,10,-1,10,13,9,-1,6,12,5,-1,5,12,4,-1,4,12,3,-1,3,12,2,-1,12,1,2,-1,7,8,12,-1,6,7,12,-1,8,9,13,-1,14,11,20,-1],
              coord=Coordinate(point=[(0.5058,0.0,0.3355),(-0.4772,0.0,0.4649),(-0.4272,0.0,0.5855),(-0.3478,0.0,0.6891),(-0.2442,0.0,0.7685),(-0.1236,0.0,0.8185),(0.0058,0.0,0.8355),(0.1352,0.0,0.8185),(0.2558,0.0,0.7685),(0.3593,0.0,0.6891),(0.4388,0.0,0.5855),(0.4887,0.0,0.4649),(-0.4941,0.0,0.3366),(-0.3781,0.0,0.3846),(-0.2487,0.0,0.4017),(-0.1193,0.0,0.3846),(0.0013,0.0,0.3347),(0.0029,0.0,0.3334),(0.0045,0.0,0.3347),(0.1251,0.0,0.3846),(0.2545,0.0,0.4017),(0.3839,0.0,0.3846),(0.5045,0.0,0.3347),(0.5056,0.0,0.3339)])))]),
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=0.0,diffuseColor=(1.0,0.0,0.0),emissiveColor=(1.0,0.0,0.0),shininess=0.0)),
            geometry=IndexedFaceSet(coordIndex=[9,8,7,-1,9,7,15,-1,15,7,12,-1,12,7,13,-1,13,7,14,-1,14,7,11,-1,4,10,11,-1,4,7,3,-1,3,7,2,-1,2,7,1,-1,1,7,0,-1,0,7,5,-1,7,6,5,-1,7,4,11,-1],
              coord=Coordinate(point=[(0.5056,0.0,0.3339),(0.4887,0.0,0.2061),(0.4388,0.0,0.0855),(0.3593,0.0,-0.018),(0.2558,0.0,-0.0975),(0.5045,0.0,0.3347),(0.3839,0.0,0.3846),(0.2545,0.0,0.4017),(0.1251,0.0,0.3846),(0.0045,0.0,0.3347),(0.2511,0.0,-0.0994),(0.2513,0.0,-0.0983),(0.1048,0.0,0.2552),(0.1843,0.0,0.1517),(0.2342,0.0,0.0311),(0.0029,0.0,0.3334)])))]),
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=0.0,diffuseColor=(0.0,1.0,0.0),emissiveColor=(0.0,1.0,0.0),shininess=0.0)),
            geometry=IndexedFaceSet(coordIndex=[8,1,9,-1,9,2,10,-1,10,2,11,-1,3,12,11,-1,3,11,2,-1,2,9,1,-1,1,8,0,-1,0,8,13,-1,13,8,7,-1,7,8,6,-1,6,8,5,-1,8,4,5,-1],
              coord=Coordinate(point=[(-0.3781,0.0,0.3846),(-0.2487,0.0,0.4017),(-0.1193,0.0,0.3846),(0.0013,0.0,0.3347),(-0.3478,0.0,-0.018),(-0.4272,0.0,0.0855),(-0.4772,0.0,0.2061),(-0.4942,0.0,0.3355),(-0.2453,0.0,-0.0967),(-0.2284,0.0,0.0311),(-0.1785,0.0,0.1517),(-0.099,0.0,0.2552),(0.0029,0.0,0.3334),(-0.4941,0.0,0.3366)])))]),
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,1.0),emissiveColor=(0.0,0.0,1.0),shininess=0.0)),
            geometry=IndexedFaceSet(coordIndex=[1,2,11,-1,1,11,0,-1,0,11,12,-1,12,11,7,-1,7,11,8,-1,8,11,9,-1,9,11,10,-1,10,11,13,-1,13,11,6,-1,6,11,5,-1,5,11,4,-1,11,3,4,-1],
              coord=Coordinate(point=[(0.2342,0.0,-0.2277),(0.1843,0.0,-0.3483),(0.1048,0.0,-0.4519),(-0.099,0.0,-0.4519),(-0.1785,0.0,-0.3483),(-0.2284,0.0,-0.2277),(-0.2455,0.0,-0.0983),(0.1352,0.0,-0.1475),(0.0058,0.0,-0.1645),(-0.1236,0.0,-0.1475),(-0.2442,0.0,-0.0975),(0.0029,0.0,-0.5301),(0.2511,0.0,-0.0994),(-0.2453,0.0,-0.0967)])))]),
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),shininess=0.0)),
            geometry=IndexedFaceSet(coordIndex=[5,6,7,-1,5,7,4,-1,4,7,13,-1,13,7,11,-1,11,7,10,-1,10,7,9,-1,9,7,8,-1,8,7,12,-1,12,7,0,-1,0,7,3,-1,3,7,2,-1,7,1,2,-1],
              coord=Coordinate(point=[(0.2513,0.0,-0.0983),(0.1048,0.0,0.2552),(0.1843,0.0,0.1517),(0.2342,0.0,0.0311),(-0.2284,0.0,0.0311),(-0.1785,0.0,0.1517),(-0.099,0.0,0.2552),(0.0029,0.0,0.3334),(0.1352,0.0,-0.1475),(0.0058,0.0,-0.1645),(-0.1236,0.0,-0.1475),(-0.2442,0.0,-0.0975),(0.2511,0.0,-0.0994),(-0.2453,0.0,-0.0967)])))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AdditiveSubtractiveLight.py")
