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
    meta(content='Refrigerator.x3d',name='title'),
    meta(content='Basic refrigerator for kitchen.',name='description'),
    meta(content='Baris Aktop',name='creator'),
    meta(content='20 August 2002',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/Refrigerator.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(
        children=[
        Shape(
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(-1,0),(-1,-0.95),(-0.975,-0.975),(-0.95,-1),(-0.05,-1),(-0.025,-0.975),(0,-0.95),(0,0),(0.1,0),(0.1,-1.05),(0.075,-1.075),(0.05,-1.1),(-1.05,-1.1),(-1.075,-1.075),(-1.1,-1.05),(-1.1,0),(-1,0)],solid=False,spine=[(0,0,0),(0,2,0)]),
          appearance=Appearance(
            material=Material(DEF='ref',diffuseColor=(0.95,0.9,0.9))))]),
      Transform(DEF='top',scale=(0.97,1,0.98),translation=(-0.5,1.95,-0.55),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='ref')),
          geometry=Extrusion(DEF='topext',creaseAngle=3.14,crossSection=[(0.55,-0.55),(0.575,-0.525),(0.6,-0.5),(0.6,0.5),(0.575,0.525),(0.55,0.55),(-0.55,0.55),(-0.575,0.525),(-0.6,0.5),(-0.6,-0.5),(-0.575,-0.525),(-0.55,-0.55),(0.6,-0.55)],solid=False,spine=[(0,0,0),(0,0.1,0)]))]),
      Transform(DEF='bottom',scale=(0.97,1,0.98),translation=(-0.5,-0.05,-0.55),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='ref')),
          geometry=Extrusion(USE='topext'))]),
      Transform(DEF='seperator',scale=(0.9,1.5,0.9),translation=(-0.5,1.4,-0.55),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='ref')),
          geometry=Extrusion(USE='topext'))]),
      Transform(DEF='maincover',center=(0.6,0,0),translation=(-0.5,0,0.05),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='ref')),
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(0.6,-0.05),(0.6,0.03),(0.57,0.04),(0.55,0.05),(-0.55,0.05),(-0.57,0.04),(-0.6,0.03),(-0.6,-0.05),(0.6,-0.05)],solid=False,spine=[(0,0,0),(0,1.45,0)])),
        CylinderSensor(DEF='mainopen',maxAngle=2.5),
        ROUTE(fromField='rotation_changed',fromNode='mainopen',toField='set_rotation',toNode='maincover'),
        Transform(rotation=(0,1,0,1.57),translation=(0.55,0,-0.05),
          children=[
          Shape(DEF='coverbin',
            geometry=Extrusion(creaseAngle=3.14,crossSection=[(0,0),(0.15,0),(0.175,-0.025),(0.2,-0.05),(0.2,-1.05),(0.175,-1.075),(0.15,-1.1),(0,-1.1),(0,0)],endCap=False,solid=False,spine=[(0,0,0),(0,0.2,0)]),
            appearance=Appearance(
              material=Material(diffuseColor=(0.9,0.9,0.9)))),
          Transform(translation=(0,1,0),
            children=[
            Shape(USE='coverbin')])])]),
      Transform(DEF='freezercover',center=(0.6,0,0),translation=(-0.5,1.5,0.05),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='ref')),
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(0.6,-0.05),(0.6,0.03),(0.57,0.04),(0.55,0.05),(-0.55,0.05),(-0.57,0.04),(-0.6,0.03),(-0.6,-0.05),(0.6,-0.05)],solid=False,spine=[(0,0,0),(0,0.5,0)])),
        CylinderSensor(DEF='freezeropen',maxAngle=2.5),
        ROUTE(fromField='rotation_changed',fromNode='freezeropen',toField='set_rotation',toNode='freezercover')]),
      Transform(rotation=(1,0,0,1.57),translation=(-0.1,0.3,-1),
        children=[
        Transform(DEF='bin1',rotation=(1,0,0,1.57),scale=(0.9,0.9,0.9),
          children=[
          Shape(
            geometry=Extrusion(beginCap=False,crossSection=[(-0.95,0),(-0.975,-0.025),(-1,-0.05),(-1,-0.95),(-0.975,-0.975),(-0.95,-1),(-0.55,-1),(-0.525,-0.975),(-0.5,-0.95),(-0.5,-0.05),(-0.525,-0.025),(-0.55,0),(-0.95,0)],solid=False,spine=[(0,0,0),(0,0.05,0),(0,0.1,0),(0,0.3,0)]),
            appearance=Appearance(DEF='binapp',
              material=Material(diffuseColor=(0.9,0.9,0.9)))),
          PlaneSensor(DEF='slide1',maxPosition=(0,0.9),minPosition=(0,0.1)),
          ROUTE(fromField='translation_changed',fromNode='slide1',toField='set_translation',toNode='bin1')])]),
      Transform(rotation=(1,0,0,1.57),translation=(0.45,0.3,-1),
        children=[
        Transform(DEF='bin2',rotation=(1,0,0,1.57),scale=(0.9,0.9,0.9),
          children=[
          Shape(
            geometry=Extrusion(beginCap=False,crossSection=[(-0.95,0),(-0.975,-0.025),(-1,-0.05),(-1,-0.95),(-0.975,-0.975),(-0.95,-1),(-0.55,-1),(-0.525,-0.975),(-0.5,-0.95),(-0.5,-0.05),(-0.525,-0.025),(-0.55,0),(-0.95,0)],solid=False,spine=[(0,0,0),(0,0.05,0),(0,0.1,0),(0,0.3,0)]),
            appearance=Appearance(USE='binapp')),
          PlaneSensor(DEF='slide2',maxPosition=(0,0.9),minPosition=(0,0.1)),
          ROUTE(fromField='translation_changed',fromNode='slide2',toField='set_translation',toNode='bin2')])]),
      Transform(scale=(0.9,1,0.9),translation=(-0.5,0.3,-0.55),
        children=[
        Shape(DEF='shelf',
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(0.55,-0.55),(0.575,-0.525),(0.6,-0.5),(0.6,0.5),(0.575,0.525),(0.55,0.55),(-0.55,0.55),(-0.575,0.525),(-0.6,0.5),(-0.6,-0.5),(-0.575,-0.525),(-0.55,-0.55),(0.6,-0.55)],solid=False,spine=[(0,0,0),(0,0.03,0)]),
          appearance=Appearance(
            material=Material(diffuseColor=(0.95,0.95,0.95),shininess=1,transparency=0.5))),
        Transform(translation=(0,0.35,0),
          children=[
          Shape(USE='shelf')]),
        Transform(translation=(0,0.7,0),
          children=[
          Shape(USE='shelf')])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Refrigerator.py")
