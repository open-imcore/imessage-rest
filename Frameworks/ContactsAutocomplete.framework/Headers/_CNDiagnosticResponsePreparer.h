//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContactsAutocomplete/_CNAutocompleteResponsePreparerDecorator.h>

@interface _CNDiagnosticResponsePreparer : _CNAutocompleteResponsePreparerDecorator
{
    id _logFuture;
}


@property(readonly) id logFuture; // @synthesize logFuture=_logFuture;
- (id)prepareResults:(id)arg1;
- (id)initWithResponsePreparer:(id)arg1 delegate:(id)arg2 log:(id)arg3;

@end

