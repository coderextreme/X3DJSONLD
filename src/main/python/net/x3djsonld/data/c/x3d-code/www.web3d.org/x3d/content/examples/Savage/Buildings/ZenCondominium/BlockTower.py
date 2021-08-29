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
    meta(content='BlockTower.x3d',name='title'),
    meta(content='Hwee Ping Ng',name='creator'),
    meta(content='20 August 2004',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='Condominum block tower.',name='description'),
    meta(content='https://savage.nps.edu/Savage/Buildings/ZenCondominium/BlockTower.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  This NavigationInfo node is added to many scenes, making examination of objects easier. 
    children=[
    Transform(scale=(0.4,0.4,0.4),translation=(-1,0.8,-3),
      children=[
      Group(DEF='block',
        children=[
        Transform(translation=(-2.3,1.8,0),
          children=[
          Shape(DEF='roundbeam',
            geometry=Cylinder(height=0.6,radius=2.3),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.61,0.22))))]),
        Transform(translation=(-2.3,3.5,0),
          children=[
          Shape(USE='roundbeam')]),
        Transform(translation=(-2.3,7.3,0),
          children=[
          Shape(USE='roundbeam')]),
        Transform(translation=(-2.3,9,0),
          children=[
          Shape(USE='roundbeam')]),
        Transform(translation=(-2.3,2.75,0),
          children=[
          Shape(DEF='roundwin',
            geometry=Cylinder(height=0.9,radius=2.3),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,0.3),transparency=0.2)))]),
        Transform(translation=(-2.3,8.25,0),
          children=[
          Shape(USE='roundwin')]),
        Transform(translation=(-2.3,2.2,0),
          children=[
          Shape(DEF='roundwinlow',
            geometry=Cylinder(height=0.2,radius=2.3),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,0.49))))]),
        Transform(translation=(-2.3,7.7,0),
          children=[
          Shape(USE='roundwinlow')]),
        Group(DEF='structure',
          children=[
          Group(DEF='Column',
            children=[
            Shape(DEF='beam',
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.61,0.22))),
              geometry=Box(size=(3.3,0.6,4))),
            Group(
              children=[
              Transform(translation=(0,1.8,0),
                children=[
                Shape(USE='beam')])])]),
          Group(DEF='window',
            children=[
            Transform(translation=(0,1,-0.1),
              children=[
              Shape(DEF='upperwin',
                geometry=Box(size=(1,1,3.8)),
                appearance=Appearance(
                  material=Material(transparency=0.2)))]),
            Group(
              children=[
              Transform(translation=(1.1,1,-0.1),
                children=[
                Shape(USE='upperwin')]),
              Transform(translation=(-1.1,1,-0.1),
                children=[
                Shape(USE='upperwin')])]),
            Group(
              children=[
              Transform(translation=(0,0.35,-0.1),
                children=[
                Shape(DEF='bottomwin',
                  appearance=Appearance(
                    material=Material(),),
                  geometry=Box(size=(1,0.25,3.8)))])]),
            Group(
              children=[
              Transform(translation=(1.1,0.35,-0.1),
                children=[
                Shape(USE='bottomwin')]),
              Transform(translation=(-1.1,0.35,-0.1),
                children=[
                Shape(USE='bottomwin')])])]),
          Group(DEF='Body',
            children=[
            Transform(translation=(-4.5,0,0),
              children=[
              Group(USE='Column')]),
            Transform(translation=(-4.5,0,0),
              children=[
              Group(USE='window')]),
            Transform(translation=(-4.5,1.8,0),
              children=[
              Group(USE='window')]),
            Transform(translation=(0,1.8,0),
              children=[
              Group(USE='window')]),
            Transform(translation=(-4.5,3.5,0),
              children=[
              Group(USE='Column')]),
            Transform(translation=(0,3.5,0),
              children=[
              Group(USE='Column')]),
            Transform(translation=(-4.5,3.5,0),
              children=[
              Group(USE='window')]),
            Transform(translation=(0,3.5,0),
              children=[
              Group(USE='window')])]),
          Group(
            children=[
            Transform(translation=(1.7,1.9,0))])]),
        Transform(translation=(0,5.5,0),
          children=[
          Group(USE='structure')]),
        Transform(translation=(-2.3,-0.01,0),
          children=[
          Shape(DEF='bottom',
            geometry=Box(size=(1.3,0.63,4)),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0.61,0.22))))]),
        Transform(translation=(-2.3,10.8,-0),
          children=[
          Shape(USE='bottom')])])]),
    Transform(scale=(0.4,0.4,0.4),translation=(-1,0.8,-1.6),
      children=[
      Group(USE='block')]),
    Group(DEF='test',
      children=[
      Transform(rotation=(0,1,0,3.14),scale=(1,0.345,1.175),translation=(-1.3,0.7,-5.3),
        children=[
        Inline(url=["result.x3d","result.wrl","https://savage.nps.edu/Savage/Buildings/ZenCondominium/result.x3d","https://savage.nps.edu/Savage/Buildings/ZenCondominium/result.wrl"])])]),
    Transform(rotation=(0,1,0,3.14),translation=(-3.77,0,-4.6),
      children=[
      Group(USE='test')]),
    Transform(translation=(-3.42,2.9,-2),
      children=[
      Shape(
        geometry=Box(size=(0.1,4.48,1.5)))]),
    Transform(scale=(0.8,0.8,0.8),translation=(-3.5,0.6,0),
      children=[
      Group(DEF='Ceiling',
        children=[
        Group(DEF='Ceiling_Left_Front',
          children=[
          Transform(translation=(0,0,-1),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.61,0.22))),
              geometry=Extrusion(convex=False,creaseAngle=0.785,crossSection=[(0,0),(4,0),(4,-1.15),(4.35,-1.8),(4,-2.4),(4,-3.75),(0,-3.75),(0,-2.6),(-0.35,-1.95),(0,-1.25),(0,0)],solid=False,spine=[(0,0,0),(0,0.1,0)]))])])])]),
    Transform(scale=(0.8,0.8,0.8),translation=(-3.5,5.17,0),
      children=[
      Group(USE='Ceiling')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BlockTower.py")
