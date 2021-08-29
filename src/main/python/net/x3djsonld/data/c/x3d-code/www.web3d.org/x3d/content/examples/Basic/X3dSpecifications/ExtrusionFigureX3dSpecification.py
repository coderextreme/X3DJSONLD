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
    meta(content='ExtrusionFigureX3dSpecification.x3d',name='title'),
    meta(content='X3D Extrusion spine-aligned cross-section plane (SCP) at a spine point. Modeled after Figure 13.5 in X3D Specification.',name='description'),
    meta(content='Al Shaffer',name='creator'),
    meta(content='4 February 2005',name='created'),
    meta(content='28 October 2019',name='modified'),
    meta(content='Extrusion.gif',name='Image'),
    meta(content='X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, Figure 13.5 - Spine-aligned cross-section plane at a spine point.',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry3D.html#f-Spine-alignedcross-section',name='specificationUrl'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/ExtrusionFigureX3dSpecification.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ExtrusionFigureX3dSpecification.x3d'),
    Background(groundColor=[(1,1,1)],skyColor=[(1,1,1)]),
    Viewpoint(description='X3D Specification Figure 13.5, Extrusion Spine-aligned Cross-section Plane (SCP)',orientation=(1,0,0,-0.43),position=(-0.5,5.5,12)),
    Viewpoint(description='Front view, Spine-aligned Cross-section Plane (SCP)',position=(0,0,14)),
    Viewpoint(description='Overhead view, Spine-aligned Cross-section Plane (SCP)',orientation=(1,0,0,-1.428899),position=(0,14,2)),
    Transform(
      #  Draw partial coordinate axis. Code derived from CoordinateAxes.x3d by Don Brutzman, 21 January 2002 
      children=[
      Transform(DEF='HALF_COORD_AXIS',
        children=[
        Group(
          #  Vertical Y arrow and labels 
          children=[
          Group(DEF='ARROW',
            children=[
            Transform(translation=(0,1,0),
              children=[
              Shape(
                appearance=Appearance(DEF='ARROW_APPEARANCE',
                  material=Material(diffuseColor=(0,1,.7))),
                geometry=Cylinder(bottom=False,radius=.05,top=False))]),
            Transform(translation=(0,2,0),
              children=[
              Shape(DEF='ARROW_POINTER',
                geometry=Cone(bottomRadius=.16,height=.4),
                appearance=Appearance(USE='ARROW_APPEARANCE'))])]),
          Transform(translation=(0.15,2.1,0.15),
            children=[
            Billboard(axisOfRotation=(0,0,0),
              children=[
              Shape(
                appearance=Appearance(DEF='LABEL_APPEARANCE',
                  material=Material(diffuseColor=(0,0,0))),
                geometry=Text(string=["+Y axis"],
                  fontStyle=FontStyle(DEF='LABEL_FONT',family=["SANS"],justify=["BEGIN","END"],size=.4,style_='ITALIC')))])])]),
        Transform(rotation=(0,0,1,-1.57079),
          #  Horizontal X arrow and label 
          children=[
          Group(
            children=[
            Group(USE='ARROW'),
            Transform(rotation=(0,0,1,1.57079),translation=(-0.15,2.1,0.15),
              children=[
              Billboard(axisOfRotation=(0,0,0),
                children=[
                Shape(
                  appearance=Appearance(USE='LABEL_APPEARANCE'),
                  geometry=Text(string=["+X axis"],
                    fontStyle=FontStyle(USE='LABEL_FONT')))])])])]),
        Transform(rotation=(1,0,0,1.57079),
          #  Perpendicular Z arrow and label 
          children=[
          Group(
            children=[
            Group(USE='ARROW'),
            Transform(rotation=(1,0,0,-1.57079),translation=(0.15,2.1,-0.15),
              children=[
              Billboard(axisOfRotation=(0,0,0),
                children=[
                Shape(
                  appearance=Appearance(USE='LABEL_APPEARANCE'),
                  geometry=Text(string=["+Z axis"],
                    fontStyle=FontStyle(USE='LABEL_FONT')))])])])])]),
      #  Draw spine-aligned cross-section plane at a spine point 
      Transform(DEF='SPINE_CROSS_SECTION',
        children=[
        Group(
          #  Draw sphere and label at center of coordinate axis 
          children=[
          Group(
            children=[
            Transform(
              children=[
              Shape(DEF='DARK_GRAY_SPHERE',
                geometry=Sphere(radius=0.3),
                appearance=Appearance(DEF='DARK_GRAY',
                  material=Material(diffuseColor=(0.15,0.15,0.15))))]),
            Transform(translation=(-1,0,0),
              children=[
              Billboard(axisOfRotation=(0,0,0),
                children=[
                Shape(
                  appearance=Appearance(USE='LABEL_APPEARANCE'),
                  geometry=Text(string=["spine[i]"],
                    fontStyle=FontStyle(DEF='LABEL_FONT2',family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.4,style_='ITALIC')))])])]),
          #  Draw spine rods 
          Group(
            children=[
            Transform(rotation=(0,0,1,0.64),
              children=[
              Transform(translation=(0,2.5,0),
                children=[
                Shape(DEF='RED_ROD',
                  geometry=Cylinder(bottom=False,height=5.0,radius=0.08,top=False),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.82,0.13,0.56))))])]),
            Transform(rotation=(0,0,1,-0.64),
              children=[
              Transform(translation=(0,-2.5,0),
                children=[
                Shape(USE='RED_ROD')])])]),
          #  Draw two spheres and labels at ends of spines 
          Group(
            children=[
            Transform(translation=(-3,4,0),
              children=[
              Shape(USE='DARK_GRAY_SPHERE'),
              Transform(translation=(0,0.7,0),
                children=[
                Billboard(axisOfRotation=(0,0,0),
                  children=[
                  Shape(
                    appearance=Appearance(USE='LABEL_APPEARANCE'),
                    geometry=Text(string=["spine[i+1]"],
                      fontStyle=FontStyle(USE='LABEL_FONT2')))])])]),
            Transform(translation=(-3,-4,0),
              children=[
              Shape(USE='DARK_GRAY_SPHERE'),
              Transform(translation=(0,-0.7,0),
                children=[
                Billboard(axisOfRotation=(0,0,0),
                  children=[
                  Shape(
                    appearance=Appearance(USE='LABEL_APPEARANCE'),
                    geometry=Text(string=["spine[i-1]"],
                      fontStyle=FontStyle(USE='LABEL_FONT2')))])])])]),
          #  Draw tangent and label between spines 
          Group(
            children=[
            Transform(translation=(-3,0,0),
              children=[
              Shape(
                geometry=Cylinder(height=8,radius=.02),
                appearance=Appearance(USE='DARK_GRAY'))]),
            Transform(rotation=(0,0,1,3.14),translation=(-3,-3.55,0),
              children=[
              Shape(
                geometry=Cone(bottomRadius=.15,height=.5),
                appearance=Appearance(USE='DARK_GRAY'))]),
            Transform(translation=(-3.2,0,0),
              children=[
              Billboard(
                children=[
                Shape(
                  appearance=Appearance(USE='LABEL_APPEARANCE'),
                  geometry=Text(string=["t a n g e n t"],
                    fontStyle=FontStyle(family=["SANS"],horizontal=False,justify=["MIDDLE","END"],size=0.5,style_='ITALIC')))])]),
            Transform(rotation=(0,0,1,1.57),translation=(-1.5,0,0),
              children=[
              Shape(
                geometry=Cylinder(height=3,radius=.015),
                appearance=Appearance(
                  material=Material(diffuseColor=(.2,.2,.2),transparency=.5)))]),
            Transform(translation=(-2.7,0.15,0),
              children=[
              Shape(
                geometry=Cylinder(height=.3,radius=.02),
                appearance=Appearance(USE='DARK_GRAY'))]),
            Transform(rotation=(0,0,1,1.57),translation=(-2.85,0.3,0),
              children=[
              Shape(
                geometry=Cylinder(height=.3,radius=.02),
                appearance=Appearance(USE='DARK_GRAY'))])]),
          #  Draw SCP (spine-aligned cross-section plane) and label 
          Group(
            children=[
            Transform(
              children=[
              Shape(
                geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                  coord=Coordinate(point=[(1.35,0,1.35),(1.35,0,-1.35),(-1.35,0,-1.35),(-1.35,0,1.35),(1.35,0,1.35)])),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.27,0.51,0.71),transparency=.5)))]),
            Transform(rotation=(1,0,0,-1.57),translation=(.5,0,-1),
              children=[
              Shape(
                geometry=Text(string=["SCP"],
                  fontStyle=FontStyle(family=["SANS"],size=0.4,style_='BOLDITALIC')),
                appearance=Appearance(USE='LABEL_APPEARANCE'))])])])]),
      #  Draw title of model 
      Group(
        children=[
        Transform(translation=(-0.2,-5.5,0),
          children=[
          Shape(
            geometry=Text(string=["Spine-aligned Cross-section Plane (SCP) at Spine Point"],
              fontStyle=FontStyle(DEF='LABEL_FONT3',family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.45,style_='BOLD')),
            appearance=Appearance(USE='LABEL_APPEARANCE'))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ExtrusionFigureX3dSpecification.py")
