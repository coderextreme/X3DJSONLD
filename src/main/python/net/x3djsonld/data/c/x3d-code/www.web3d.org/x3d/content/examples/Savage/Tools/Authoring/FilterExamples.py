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
    meta(content='FilterExamples.x3d',name='title'),
    meta(content='Contains examples for the prototypes defined in the FilterPrototypes.x3d',name='description'),
    meta(content='Don Brutzman, James Harney, Jane Wu',name='creator'),
    meta(content='18 December 2001',name='created'),
    meta(content='27 February 2016',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Tools/Authoring/FilterPrototypes.x3d',name='reference'),
    meta(content='filter',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/Authoring/FilterExamples.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='FilterBooleanPassTrueEvents',url=["FilterPrototypes.wrl#FilterBooleanPassTrueEvents","https://savage.nps.edu/Savage/Tools/Authoring/FilterPrototypes.wrl#FilterBooleanPassTrueEvents","FilterPrototypes.x3d#FilterBooleanPassTrueEvents","https://savage.nps.edu/Savage/Tools/Authoring/FilterPrototypes.x3d#FilterBooleanPassTrueEvents"],
      field=[
      field(accessType='inputOnly',name='setBoolean',type='SFBool'),
      field(accessType='outputOnly',name='trueEventOut',type='SFBool'),
      field(accessType='outputOnly',name='trueEventTime',type='SFTime')]),
    ExternProtoDeclare(name='FilterBooleanPassFalseEvents',url=["FilterPrototypes.wrl#FilterBooleanPassFalseEvents","https://savage.nps.edu/Savage/Tools/Authoring/FilterPrototypes.wrl#FilterBooleanPassFalseEvents","FilterPrototypes.x3d#FilterBooleanPassFalseEvents","https://savage.nps.edu/Savage/Tools/Authoring/FilterPrototypes.x3d#FilterBooleanPassFalseEvents"],
      field=[
      field(accessType='inputOnly',name='setBoolean',type='SFBool'),
      field(accessType='outputOnly',name='falseEventOut',type='SFBool'),
      field(accessType='outputOnly',name='falseEventTime',type='SFTime')]),
    ExternProtoDeclare(name='SingleTypeConversion',url=["SingleTypeConversionPrototype.wrl#SingleTypeConversion","https://savage.nps.edu/Savage/Tools/Authoring/SingleTypeConversionPrototype.wrl#SingleTypeConversion","SingleTypeConversionPrototype.x3d#SingleTypeConversion","https://savage.nps.edu/Savage/Tools/Authoring/SingleTypeConversionPrototype.x3d#SingleTypeConversion"],
      field=[
      field(accessType='initializeOnly',appinfo='decimalPlaces is the number of significant digits after the decimal point. The -1 value indicates no round off.',name='decimalPlaces',type='SFInt32'),
      field(accessType='inputOnly',name='setDecimalPlaces',type='SFInt32'),
      field(accessType='inputOnly',name='BooleanValue',type='SFBool'),
      field(accessType='inputOnly',name='FloatValue',type='SFFloat'),
      field(accessType='inputOnly',name='IntegerValue',type='SFInt32'),
      field(accessType='inputOnly',name='TimeValue',type='SFTime'),
      field(accessType='outputOnly',name='BooleanResult',type='SFBool'),
      field(accessType='outputOnly',name='FloatResult',type='SFFloat'),
      field(accessType='outputOnly',name='IntegerResult',type='SFInt32'),
      field(accessType='outputOnly',name='TimeResult',type='SFTime'),
      field(accessType='outputOnly',name='StringResult',type='SFString'),
      field(accessType='outputOnly',name='StringsResult',type='MFString')]),
    ExternProtoDeclare(name='SliderFloat',url=["../../../Savage/Tools/Animation/SliderFloatPrototype.wrl#SliderFloat","https://savage.nps.edu/Savage/Tools/Animation/SliderFloatPrototype.wrl#SliderFloat","../../../Savage/Tools/Animation/SliderFloatPrototype.x3d#SliderFloat","https://savage.nps.edu/Savage/Tools/Animation/SliderFloatPrototype.x3d#SliderFloat"],
      field=[
      field(accessType='initializeOnly',name='layoutDirection',type='SFString'),
      field(accessType='initializeOnly',name='height',type='SFFloat'),
      field(accessType='initializeOnly',name='radius',type='SFFloat'),
      field(accessType='initializeOnly',name='barRadius',type='SFFloat'),
      field(accessType='initializeOnly',name='sliderBarColor',type='SFColor'),
      field(accessType='initializeOnly',name='sliderBallColor',type='SFColor'),
      field(accessType='initializeOnly',name='sliderEndColor',type='SFColor'),
      field(accessType='initializeOnly',name='min',type='SFFloat'),
      field(accessType='initializeOnly',name='max',type='SFFloat'),
      field(accessType='initializeOnly',name='value',type='SFFloat'),
      field(accessType='inputOnly',name='setMin',type='SFFloat'),
      field(accessType='inputOnly',name='setMax',type='SFFloat'),
      field(accessType='inputOnly',name='setValue',type='SFFloat'),
      field(accessType='outputOnly',name='valueChanged',type='SFFloat'),
      field(accessType='outputOnly',name='isDragged',type='SFBool'),
      field(accessType='initializeOnly',name='dragEnabled',type='SFBool'),
      field(accessType='inputOnly',name='setDragEnabled',type='SFBool'),
      field(accessType='outputOnly',name='dragEnabledChanged',type='SFBool'),
      field(accessType='initializeOnly',name='clickEnabled',type='SFBool'),
      field(accessType='inputOnly',name='setClickEnabled',type='SFBool'),
      field(accessType='outputOnly',name='clickEnabledChanged',type='SFBool')]),
    Viewpoint(description='Filter Examples',position=(0,0,15)),
    Billboard(axisOfRotation=(0,0,0),
      children=[
      Transform(translation=(0,4,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,1,1))),
          geometry=Text(string=["FilterBooleanPassTrueEvents","FilterBooleanPassFalseEvents:","","drag slider to test examples"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.8)))]),
      Transform(translation=(0,1,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Text(string=["BooleanSequencer:","key {0 0.25 0.5 0.75 1} keyValue {0 1 0 1 0}"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.6))),
        BooleanSequencer(DEF='BooleanGenerator',key=[0,0.25,0.5,0.75,1],keyValue=[False,True,False,True,False])]),
      Transform(translation=(-4,-1,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Text(string=["Fraction:"],
            fontStyle=FontStyle(size=0.6))),
        Transform(translation=(3,0,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Text(DEF='BooleanFractionText',string=["N/A"],
              fontStyle=FontStyle(size=0.6)))]),
        Transform(translation=(6,0.15,0),
          children=[
          ProtoInstance(DEF='Slider',name='SliderFloat',
            fieldValue=[
            fieldValue(name='layoutDirection',value='horizontal'),
            fieldValue(name='min',value=0),
            fieldValue(name='max',value=1),
            fieldValue(name='height',value=4)]),
          ROUTE(fromField='valueChanged',fromNode='Slider',toField='set_fraction',toNode='BooleanGenerator')]),
        ProtoInstance(DEF='BooleanFractionRoundOff',name='SingleTypeConversion',
          fieldValue=[
          fieldValue(name='decimalPlaces',value=2)]),
        ROUTE(fromField='valueChanged',fromNode='Slider',toField='FloatValue',toNode='BooleanFractionRoundOff'),
        ROUTE(fromField='StringsResult',fromNode='BooleanFractionRoundOff',toField='set_string',toNode='BooleanFractionText')]),
      Transform(translation=(-5,-3,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Text(string=["PassTrueEvents:"],
            fontStyle=FontStyle(size=0.6))),
        Transform(translation=(3.85,0.15,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(DEF='TrueLightMaterial',diffuseColor=(0.45,0.45,0.45),emissiveColor=(0.45,0.45,0.45))),
            geometry=Sphere(radius=0.2)),
          Script(DEF='TrueScript',
            field=[
            field(accessType='inputOnly',name='setTrue',type='SFBool'),
            field(accessType='outputOnly',name='colorChanged',type='SFColor')]),
          ProtoInstance(DEF='TrueEventFilter',name='FilterBooleanPassTrueEvents'),
          ROUTE(fromField='value_changed',fromNode='BooleanGenerator',toField='setBoolean',toNode='TrueEventFilter'),
          ROUTE(fromField='trueEventOut',fromNode='TrueEventFilter',toField='setTrue',toNode='TrueScript'),
          ROUTE(fromField='colorChanged',fromNode='TrueScript',toField='diffuseColor',toNode='TrueLightMaterial'),
          ROUTE(fromField='colorChanged',fromNode='TrueScript',toField='emissiveColor',toNode='TrueLightMaterial')])]),
      Transform(translation=(0,-3,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Text(string=["PassFalseEvents:"],
            fontStyle=FontStyle(size=0.6))),
        Transform(translation=(4,0.15,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(DEF='FalseLightMaterial',diffuseColor=(0.45,0.45,0.45),emissiveColor=(0.45,0.45,0.45))),
            geometry=Sphere(radius=0.2)),
          Script(DEF='FalseScript',
            field=[
            field(accessType='inputOnly',name='setFalse',type='SFBool'),
            field(accessType='outputOnly',name='colorChanged',type='SFColor')]),
          ProtoInstance(DEF='FalseEventFilter',name='FilterBooleanPassFalseEvents'),
          ROUTE(fromField='value_changed',fromNode='BooleanGenerator',toField='setBoolean',toNode='FalseEventFilter'),
          ROUTE(fromField='falseEventOut',fromNode='FalseEventFilter',toField='setFalse',toNode='FalseScript'),
          ROUTE(fromField='colorChanged',fromNode='FalseScript',toField='diffuseColor',toNode='FalseLightMaterial'),
          ROUTE(fromField='colorChanged',fromNode='FalseScript',toField='emissiveColor',toNode='FalseLightMaterial')])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for FilterExamples.py")
